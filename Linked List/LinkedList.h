class Node{
	public:
		int		value; //data value
		Node 	*next; //pointer untuk node selanjutnya
		Node() { //constructor: sebuah method yang dipanggil untuk pertama kali
			next = NULL;
		}
};

class LinkedList{
	
	public:
		Node *head;
		Node *tail;
		
		void insertToHead(int);
		void insertToTail(int);
		void insertAfter(int, int); //(insert Node X, setelah Node B) insertAfter(X,B)
		
		void deleteFromHead();
		void deleteFromTail();
		void deleteByValue(int);
		
		void printAll();
		
		LinkedList(){
			head = tail = NULL;
		}
};
