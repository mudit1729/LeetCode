class LRUCache {
public:
    class Node {
    public:
        Node* parent = NULL;
        Node* child = NULL;
        int val = 0;
        int key = 0;
    };
    
    int RemoveTail(Node* tail){
        int ret;
        Node* tmp = tail->parent;
        ret = tmp->key;
        tail->parent->parent->child = tail;
        tail->parent = tail->parent->parent;
        delete(tmp);
        return ret;
    }

    void AddNode(Node* tail, Node* x){
        head->child->parent = x;
        x->child = head->child;
        head->child = x;
        x->parent = head;
    }

    void Promote(Node* x, Node* head, Node* tail) {
        x->parent->child = x->child;
        x->child->parent = x->parent;
        x->child = head->child;
        head->child->parent = x;
        head->child = x;
        x->parent = head;
    }
    
    Node* head;
    Node* tail;
    int limit;
    map<int,Node*> m;
    int count= 0;
    
    LRUCache(int capacity) {
        head = new Node();
        tail = new Node();
        head->child = tail;
        tail->parent = head;
        limit = capacity;
    }
    
    int get(int key) {
        if(m.find(key)!=m.end()) {
            Promote(m[key], head, tail);
            return m[key]->val;
        } else return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            m[key]->val = value;
            Promote(m[key], head, tail);
        } else {
            count++;
            if(count > limit) {
                int k = RemoveTail(tail);
                m.erase(k);
            }
            m[key] = new Node();
            m[key]->val = value;
            m[key]->key = key;
            AddNode(head, m[key]);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */