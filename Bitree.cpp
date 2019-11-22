#include <iostream>
#include <algorithm>
#include <vector> 
#include <ctime>
using namespace std;
const int maxn = 1000;

class Node{
public:
    int key;
    Node *left;
    Node *right;
    Node *parent;
    Node(int value,Node *p,Node *l, Node *r):
        key(value),parent(p),left(l),right(r){}
    // 判断是否为空 
    bool empty() {
    	if(left == nullptr && right == nullptr) return true;
    	return false;
	};
};

class Tree{
public:
    Node *mroot;
    Tree(){
        mroot = nullptr;
    };
    ~Tree(){
        destroy(mroot);
    };
    // 插入函数
    void insert(int key){
        Node *z = nullptr;
        if((z = new Node(key, nullptr, nullptr, nullptr)) == nullptr)
            return;
        insert(mroot, z);
    };
    // 前序遍历
    void preOrder(){
        preOrder(mroot);
        cout<<endl;
    };
    // 非递归前序遍历
	void preOrderNoRecursion(){
		if(mroot == nullptr) {
			cout<<endl;
			return;
		}
		Node * s[maxn];
		int top = 1;
		s[0] = mroot;
		Node * tmp;
		while(top > 0){
			top--;
			tmp = s[top];
			cout<<tmp->key<<" ";
			if(tmp->right != nullptr){
				s[top] = tmp->right;
				top++;
			}
			if(tmp->left != nullptr){
				s[top] = tmp->left;
				top++;
			}
		}
		cout<<endl;
	};
	// 中序遍历
	void inOrder(){
		inOrder(mroot);
		cout<<endl;
	};
	// 非递归中序遍历
	void inOrderNoRecursion(){
		if(mroot == nullptr) {
			cout<<endl;
			return;
		}
		int top = 0;
		Node * s[maxn];
		Node * tmp = mroot;
		while (top != 0 || tmp != nullptr) {
		    while (tmp != nullptr) {
		    	s[top] = tmp;
		    	top++;
		        tmp = tmp->left;
	        } 
			if(top!=0) {
		        tmp = s[top-1];
				cout << tmp->key << " ";
		        top--;
		        tmp = tmp->right;
		    }
		}
		cout<<endl;
	}
	// 后续遍历
	void postOrder(){
		postOrder(mroot);
		cout<<endl;
	};
	// 非递归后续遍历
	void postOrderNoRecursion(){
		if(mroot == nullptr) {
			cout<<endl;
			return;
		}
		Node *s[maxn], *tmp;
		int mark[maxn], top = -1;
		s[++top] = mroot;
		mark[top] = 0;
		while(top >= 0){
			tmp = s[top];
			if(mark[top] == 0 && !tmp->empty()){
				mark[top] = 1;
				if(tmp->right != nullptr){
					s[++top] = tmp->right;
					mark[top] = 0;
				}
				if(tmp->left != nullptr){
					s[++top] = tmp->left;
					mark[top] = 0;
				}
			}
			if(s[top]->empty() || mark[top] == 1)
				cout<<s[top--]->key<<" ";
		}
		cout<<endl;
	};
	// 层次遍历
	void hierachicalorder(){
		if(mroot == nullptr) return;
		Node* s[maxn];
		s[0] = mroot;
		int head = 0, tail = 1;
		while(head < tail){
			int p = tail;
			for(int i = head; i < p; i++){
				cout<<s[i]->key<<" ";
				head++;
				if(!s[i]->empty()){
					if(s[i]->left != nullptr){
						s[tail] = s[i]->left;
						tail++;
					}
					if(s[i]->right != nullptr){
						s[tail] = s[i]->right;
						tail++;
					}
				}
			}
		}
		cout<<endl;
	}; 
	// 结点个数
	int count(){
		return count(mroot);
	} 
    // 统计高度
    int height(){
        return height(mroot);
    };
    // 判断是否是满树
	bool full(){
		int h=height();
		int t=1;
		for(int i=0;i<h;i++) t*=2;
		if(count()==t-1) return true;
		else return false;
	} 
	// 判断是否完全二叉树
	bool  complete(){
		if(mroot == nullptr) true;
		Node* s[maxn];
		s[0] = mroot;
		int head = 0, tail = 1, h = height(), th = 1;
		bool tag = false;
		while(head < tail){
			int p = tail;
			for(int i = head; i < p; i++){
				head++;
				if(!s[i]->empty()){
					if(s[i]->left == nullptr || s[i]->right == nullptr){
						if(tag) return false;
						tag = true;
					}
					if(s[i]->left != nullptr){
						s[tail] = s[i]->left;
						tail++;
					}
					if(s[i]->right != nullptr){
						if(tag) return false;
						s[tail] = s[i]->right;
						tail++;
						tag = true;
					}
				}
			}
		}
		return true;
	}
    // 销毁树
    void destroy(){
        destroy(mroot);
    };
private:
	// 插入函数
    void insert(Node* &root, Node* node){
        Node *x = root;
        Node *y = nullptr;
        while (x != nullptr){
            y = x;
            if(node->key < x->key)
                x = x->left;
            else
                x = x->right;
        }
        node->parent = y;
        if(y != nullptr){
            if(node->key < y->key)
                y->left = node;
            else
                y->right = node;
        }
        else
            root = node;
    };
	// 前序遍历
    void preOrder(Node* tree) const{
        if (tree != nullptr){
            cout<< tree->key <<" ";
            preOrder(tree->left);
            preOrder(tree->right);
        }
    };
    // 中序遍历
	void inOrder(Node* tree) const{
		if(tree != nullptr){
            inOrder(tree->left);
            cout<< tree->key <<" ";
            inOrder(tree->right);
		}
	};
    // 后序遍历 
	void postOrder(Node* node) const{
		if (node != nullptr){
			postOrder(node->left);
			postOrder(node->right);
			cout<<node->key<<" ";
		}
	};
	// 结点个数
	int count(Node * node){
		if(node==nullptr) return 0;
		return count(node->left)+count(node->right)+1;
	} 
    // 统计高度 
    int height(Node* node){
        if (node == nullptr) return 0;
        int l=height(node->left),r=height(node->right);
        if(l > r)
            return l+1;
        else
            return r+1;
    };
    // 销毁树
    void destroy(Node* &tree){
        if(tree == nullptr)
            return;
        if(tree->left != nullptr)
            return destroy(tree->left);
        if(tree->right != nullptr)
            return destroy(tree->right);
        delete tree;
        tree = nullptr;
    };
};

int main(){
	Tree tree;
	vector<int> l;
    for (int i = 0; i < 3; i++)
        l.push_back(i);
    srand((unsigned)time(0));
    random_shuffle(l.begin(),l.end());
    for (int i = 0; i < 3; i++)
        tree.insert(l[i]);
    cout<<"postOrder: ";
    tree.postOrder();
    cout<<"postOrderNoRecursion: ";
    tree.postOrderNoRecursion();
	cout<<"inOrder: ";
	tree.inOrder();
	cout<<"inOrderNoRecursion: ";
	tree.inOrderNoRecursion();
	cout<<"preOrder: ";
	tree.preOrder();
	cout<<"preOrderNoRecursion: ";
	tree.preOrderNoRecursion();
	cout<<"Hierachicalorder: ";
	tree.hierachicalorder();
	cout<<"Height: "<<tree.height()<<endl;
	cout<<"number of nodes: "<<tree.count()<<endl;
	if(tree.full())cout<<"full tree!\n";
	else cout<<"not full tree!\n";
	if(tree.complete())cout<<"complete tree!\n";
	else cout<<"not compelete tree!\n";
}
