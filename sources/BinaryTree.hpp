# pragma once
#include <iostream>

namespace ariel {

template <typename T>
class BinaryTree{

class Node{

    public:
    T data;
    Node *left;
    Node *right;

    Node(T val , Node *leftNegh , Node *rightNegh){
        this->left =    NULL;
        this->right = NULL;
        this->data = val;
    }
};

class iterator{

        private:
        Node *curNode;

        public:
        //constructor
        iterator(){
            this->curNode = nullptr;
        }

        iterator(Node *n){
            this->curNode = n;
        }
        
        T &operator*() const{
            return this->curNode->data;
        }

        bool operator!=(const iterator &it) const{
           
            // if(it.curNode->data != curNode->data){
            //     return true;
            // }
            return false;
        }

        iterator &operator++(){

             this->curNode = this->curNode->left;
            return *this;
        }

        T *operator->() const{
                return &(this->curNode->data);
            }

        bool operator==(const iterator &it) const{
            return this->curNode == it->curNode;
            return false;
        }

    };

    private:
    Node *root;

    public:

    BinaryTree(){
        root = NULL;
    }

    BinaryTree<T> &add_root(T root);
    BinaryTree<T> &add_left(T oldVal,T leftRoot);
    BinaryTree<T> &add_right(T oldVal,T rightRoot);

    

    iterator begin(){
        return iterator(root);
    }

    iterator end(){
        return iterator(root);
    }

    iterator begin_preorder(){
        return(iterator(root));
    }

    iterator end_preorder(){
        return (iterator(root));
    }

    iterator begin_inorder(){
        return iterator(root);
    }

    iterator end_inorder(){
        return iterator(root);
    }

    iterator begin_postorder(){
        return iterator(root);
    }

    iterator end_postorder(){
        return iterator(root);
    }

    
    friend std::ostream &operator<<(std::ostream& os , const BinaryTree<T> &b){
          return os;
        }

    ~BinaryTree() {}

};

    template <typename T>
    BinaryTree<T> &BinaryTree<T>::add_root(T root){
        return *this;
    } 

    template <typename T>
    BinaryTree<T> &BinaryTree<T>::add_left(T oldVal,T leftRoot){
        return *this;
    } 

    template <typename T>
    BinaryTree<T> &BinaryTree<T>::add_right(T oldVal,T rightRoot){
        return *this;
    }

}