#include<iostream>
#include<string.h>
using namespace std;
class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int data){
            this->data = data;
            this->left = this->right = NULL;
        }
};
void newNode(Node *root,string path,int val){
    Node *temp = root;
    int len = path.size();
    int i=0;
    while(i<len-1){
        if(path[i]=='L')
            temp = temp->left;
        else if(path[i]=='R')
            temp = temp->right;
        i++;
    }
    if(path[i]=='L')
        temp->left = new Node(val);
    else if(path[i]=='R')
        temp->right = new Node(val);
}
void inisialize(Node *root,int size){
    for(int i=0; i<size-1; i++){
        string path;
        cin>>path;
        int value;
        cin>>value;
        newNode(root,path,value);
    }
}
void inOrder(Node *root){
    if(root){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}
int height(Node *node){
	if(node == NULL) 
       return 0;     
   return 1 + max(height(node->left), height(node->right)); 
}
int diameter(Node *node){
    if(!node)
        return 0;
        
    int lheight = height(node->left);
	int rheight = height(node->right);
	
	int lDepth = diameter(node->left);
    int rDepth = diameter(node->right);

//    if (lDepth > rDepth) 
//        return(lDepth+1);
//    else 
//        return(rDepth+1);
    
    return max(lheight+rheight+1,max(lDepth,rDepth));
}

int main(){
    int t,x;
    cin>>t>>x;
    Node *root = new Node(x);
    inisialize(root,t);
    //inOrder(root);
    cout<<diameter(root);
    return 0;
}



//#include <iostream>
//#include<stdlib.h>
//using namespace std;
//class Test{
//	int a;
//	int b;
//	public:
//		Test(int=0,int=0);
//		void* operator new(size_t);
//		void operator delete(void *);
//		void operator delete[](void *);
//		void* operator new[](size_t);		
//		~Test();
//};
//Test ::Test(int x,int y){
//	cout<<endl<<"constructor called..";
//	a=x;
//	b=y;
//}
//void Test::operator delete(void *pt){
//	cout<<endl<<"operator delete overload..";
//	free (pt);
//}
//void Test::operator delete[](void *pt){
//	cout<<endl<<"operator delete[] overload..";
//	free (pt);
//}
//void* Test::operator new(size_t v){   	//v=size of Test =8 byte
//	cout<<endl<<"operator new overload.. "<<v;
//	void* tmp=malloc(v);
//	return tmp;
//}
//
//void* Test::operator new[](size_t v){   	//v=size of Test =32 byte
//	cout<<endl<<"operator new[] overload.. "<<v;
//	void* tmp=malloc(v);
//	return tmp;
//}
//Test::~Test(){
//	cout<<endl<<"destructor call..";
//}
//int main(){
//	Test *ob1=new Test;  	// operator new
//	delete ob1;
//	Test *ob2=new Test[2];		// operator new[]
//	delete [] ob2;
//	return 0;
//}




/*
15 1
LLL
2
LL
3
L
4
RR
5
R
6
LLRLL
7
LLR
8
LLRL
9
LLRLR
10
LRRRR
11
LRRL
12
LRRR
13
LRR
14
LR
15
*/
