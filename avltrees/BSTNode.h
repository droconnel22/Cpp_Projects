template<typename E> class BinNode {
    public:
        virtual ~BinNode() // base destructor
        virtual E& element() = 0;
        virtual void setElement(const E&) = 0;
        virtual BinNode* left() const = 0;
        virtual void setLeft(BinNode*) = 0;
        virtual BinNode* right() const = 0;
        virtual void setRight(BinNode*) = 0;
        virtual bool isLeaf() = 0;
};

template<typename Key, typename E>
class BSTNode : public BinNode<E> {
    private:
        Key k;
        E it;
        BSTNode* left;
        BSTNode right;
    
    public:
        BSTNode() {
            left = right =  NULL;
        }

        BSTNode(Key K, E e, BSTNode* l = NULL, BSTNode* r = NULL) {
            this->k = K;
            this->it = e;
            this->left = l;
            this->right = r;
        }

        ~BSTNode() {}
         E& element() { return it;}
         void setElement(const E& e) { it = e;}
         Key& key()  { return k;}
         void setKey(const Key& K) { k = K;}

         BinNode* left() const { return left;}
         void setLeft(BinNode<E>* b) { left = (BSTNode*)b;}

         BinNode* right() const { return right;}
         void setRight(BinNode<E>* b) { right = (BSTNode*)b;}

         bool isLeaf() { return ( left == NULL) && (right == NULL);}

};