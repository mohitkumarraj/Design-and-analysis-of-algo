#include<iostream>
using namespace std;

class node{
public:
	int data;
	node *left;
	node *right;
		node(){
			data=0;
			left=NULL;
			right=NULL;
		}	
        node(int d,node *le=NULL, node *ri=NULL){
        	data=d;
        	left=le;
        	right=ri;
		}	
};
//root node universal to all 
class BST{
	public:
		node *root;
		BST(){
			root=NULL;
		}
	
	void insertInTree(int key){
		node *temp=new node(key);
		node *current;
        node *parent;
		
		if(root==NULL){
			root =temp;
		}else{
              current=root;
              parent=NULL;
              while(1){
              	parent=current;
              	if(key<parent->data){
              		current=current->left;
              	  	
              		if(current==NULL){
              			parent->left=temp;
              			return;
					  }
				  }else{
				  	current=current->right;
				  	if(current==NULL){
              			parent->right=temp;
              			return;
					  }
				  }//end of inner else
			  }//end of while loop	  
		}//end of else 
	}// end of method

    void inOrder(node *root){
    	if(root!=NULL){
    		inOrder(root->left);
    		cout<<root->data<<" ";
    		inOrder(root->right);
		}
	}
	
	void preOrder(node *root){
    	if(root!=NULL){
    		cout<<root->data<<" ";
			preOrder(root->left);
    		preOrder(root->right);
		}
	}
	
	void postOrder(node *root){
    	if(root!=NULL){
			postOrder(root->left);
    		postOrder(root->right);
		    cout<<root->data<<" ";
		}
	}
   
   node *search(int data){
   	node *current=root;
   	cout<<"Visiting nodes";
   	while(current->data!=data){
   		if(current!=NULL)
   		   cout<<current->data<<" ";
   		if(current->data>data)
   		   current=current->left;
   		else current=current->right;
   		
   		if(current==NULL){
   			return NULL;
		   }
	   }
   	return current;
   } 

  int minNode(node *root){
  	node *current=root;	
  	while(current->left!=NULL){
  		current=current->left;
	  }
    return current->data;  	
  }
  
  int maxNode(node *root){
  	node *current=root;
  	while(current->right!=NULL){
  		current=current->right;
	  }
    return current->data;  	
  }
   
  node *deleteNode(node *root,int key){
    if(root==NULL)
	  return NULL;	
  	else if(root->data>key)
  	     root->left=deleteNode(root->left,key);
    else if(root->data<key)
  	     root->right=deleteNode(root->right,key); 
    else{
    	 
		 if(root->left==NULL&&root->right==NULL){
		  delete root;
		  return NULL;	
		 }else if(root->left==NULL){
		 	node *temp=root->right;
		 	delete root;
		 	return temp;
		 	
		 }else if(root->right==NULL){
		 	node *temp=root->left;
		 	delete root;
		 	return temp;
		 }else{
		    int min= minNode(root->right);
			root->data=min;
			root->right=deleteNode(root->right,min);	
		 }
	}
  return root;
  }  

	
};


int main(){
    BST obj; 	
	int choice,val;
	do{
		cout<<"\n=============Menu============== \n";
		cout<<"Press 1 to Insert a Node in Tree"<<endl;
	    cout<<"Press 2 to Delete a Node in Tree"<<endl;	
	    cout<<"Press 3 for inOrder Traversal"<<endl;
        cout<<"Press 4 for preOrder Traversal"<<endl;
        cout<<"Press 5 for postOrder Traversal"<<endl;
		cout<<"Press 6 to search Element in Tree"<<endl;
		cout<<"Press 7 to find the miniumum node in the Tree"<<endl;
		cout<<"Press 8 to find the maximum node in the Tree"<<endl;
		cout<<"Press 9 to Delete node from the Tree"<<endl;
		cout<<"Enter Your Choice ";
		cin>>choice;
		switch(choice){
			case 1:{
//				cout<<"\nEnter the Value of inserting node ";
//				cin>>val;
//				obj.insertInTree(val);
//				cout<<" Node Inserted";
//				break;
//			   
                 obj.insertInTree(25);
                 obj.insertInTree(20);
                 obj.insertInTree(36);
                 obj.insertInTree(10);
                 obj.insertInTree(22);
                 obj.insertInTree(30);
                 obj.insertInTree(40);
                 obj.insertInTree(5);
                 obj.insertInTree(12);
                 obj.insertInTree(28);
                 obj.insertInTree(38);
             	 obj.insertInTree(48);			
			  break;
			}
			case 2:{
				
				cout<<"Enter the value of deleting node ";
				cin>>val;
				obj.root=obj.deleteNode(obj.root,val);
				obj.inOrder(obj.root);
				break;
			}
			case 3:{
				cout<<"InOrder Traversal is here ";
				obj.inOrder(obj.root);
				break;
			}
		    case 4:{
				cout<<"preOrder Traversal is here ";
				obj.preOrder(obj.root);
				break;
			}
			case 5:{
				cout<<"postOrder Traversal is here ";
				obj.postOrder(obj.root);
				break;
			}
			case 6:{
				cout<<"Enter element to be search";
				cin>>val;
				cout<<"\nnode found at "<<obj.search(val)->data;
				break;
			}
			case 7:{
				cout<<"Minimum node is "<<obj.minNode(obj.root);
				break;
			}
			case 8 :{
				cout<<"Maximum node is "<<obj.maxNode(obj.root);
				break;
			}
				
			
				
		}
	}while(choice!=0);
	
return 0;	
}
