#include <bits/stdc++.h>

using namespace std;

struct snode{
	int data;
	struct snode *next;
};
typedef struct snode Node;

struct SLinkedList{
	Node * head;
	Node * tail;
	int size;
};
typedef struct SLinkedList SLinkedList;

Node *creatNode(const int &value){
	Node *tmp = new Node;
	tmp->data = value;
	tmp->next = NULL;
	return tmp;
}

void push(SLinkedList *L, const int &value);
void pop(SLinkedList *L);
int Front(SLinkedList *L);
int Size(SLinkedList *L);
bool Empty(SLinkedList *L);

void push(SLinkedList *L, const int &value){
	Node *newNode = creatNode(value);
	if(L->size == 0){
		L->head = newNode;
		L->tail = newNode;
	}else{
		L->tail->next = newNode;
		L->tail = newNode;
	}
	L->size++;
}

void pop(SLinkedList *L){
	if(L->size == 0){
		cout<<"\nINVALID\n";
	}else{
	 	Node *tmp = L->head;
		L->head = tmp->next;
		delete tmp; 	
		L->size--;
	}
}

int Front(SLinkedList *L){
	if(L->head != NULL)	return L->head->data;
}

int Size(SLinkedList *L){
	return L->size;
}

bool Empty(SLinkedList *L){
	return L->size == 0;
}

void duyet(SLinkedList *L){
	Node *tmp = L->head;
	while(tmp != NULL){
		cout<<tmp->data<<" ";
		tmp = tmp->next;
	}
	delete tmp;
}

int main(){
	SLinkedList *qeu = new SLinkedList;
	qeu->head = NULL;
	qeu->tail = NULL;
	qeu->size = 0;
	
	while(1){
		cout<<"\n--------------\n";
		cout<<"1.push\n";
		cout<<"2.pop\n";
		cout<<"3.front\n";
		cout<<"4.size\n";
		cout<<"5.empty\n";
		cout<<"-EXIT-\n";
		cout<<"---------------\n";
		int n; cin>>n;
		switch(n){
			case 1:
				int x;cin>>x;
				push(qeu,x);
				break;
			case 2:
				pop(qeu); break;
			case 3:
				Empty(qeu)?cout<<"EMPTY":cout<<Front(qeu)<<endl;
				break;
			case 4:
 				cout<<Size(qeu); break;
			case 5:
                Empty(qeu)?cout<<"EMPTY":cout<<"NOT EMPTY";
				break;
			case 6:
				duyet(qeu); break;
			default:
				return 0;
		}
	}
    return 0;
}
