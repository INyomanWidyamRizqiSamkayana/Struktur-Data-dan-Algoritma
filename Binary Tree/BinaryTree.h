class Node{
	
	public:
		
		int val;
		
		Node *left;
		Node *right;
		
	Node(){
		
		right = left = NULL;
	}
};

class BinaryTree{
	
	public:
		// INSERT
		void insertNode(int);
		Node *insertNodeRecursive(Node*, int);
		
		// DELETE
		void deleteNode(int);
		
		// SEARCH
		void searchNode(int);
		Node *searchNodeRecursive(Node*, int);
		
		// FIND MINIMUM
		Node *findMin();
		Node *findMinRecursive(Node*);
		
		// FIND MAXIMUM
		Node *findMax();
		Node *findMaxRecursive(Node*);
		
		// TRAVERSAL IN ORDER
		void InOrder();
		void inorderRecursive(Node*);
		
		// TRAVERSAL PRE ORDER
		void PreOrder();
		void preorderRecursive(Node*);
		
		// TRAVERSAL POST ORDER
		void PostOrder();
		void postorderRecursive(Node*);
		
		Node *root;
		
	BinaryTree()
	{
		root = NULL;
	}
};
