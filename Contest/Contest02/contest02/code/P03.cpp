#include "bits/stdc++.h"
using namespace std;

const int Max_Char = 26;

struct Trie {
	int index;
	Trie * child[Max_Char];
	Trie (){
		for (int i = 0; i < Max_Char; i++){
			child[i] = NULL;
		}
		index = -1;
	}
};

void insert(Trie *root, string str, int index){
	Trie *node = root;
	for (int i = 0; i < str.size(); i++){
		int idx = str[i] - 'a';
		if(!node->child[idx]){
			node->child[idx] = new Trie();
		}
		node = node->child[idx];
	}
	node->index = index;
}
bool preorder(Trie *node, string arr[]){
	if(node == NULL) return false;
	for (int i = 0; i < Max_Char; i++){
		if(node->child[i] != NULL){
			if(node->child[i]->index != -1){
				cout << arr[node->child[i]->index] << endl;		
			}
			preorder(node->child[i], arr);
		}
	}
}

void printSorted(string arr[], int n){
	Trie *root = new Trie();
	for (int i = 0; i < n; i++){
		insert(root, arr[i], i);
	}
	
	preorder(root, arr);
}

string arr[100005];
int n;

int main(){
	
	cin >> n; 
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}	
	printSorted(arr, n);
	return 0;
}
