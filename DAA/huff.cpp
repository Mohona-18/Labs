#include <bits/stdc++.h>
using namespace std;

struct MinHeapNode {
	char data;
	unsigned freq;

	MinHeapNode *left, *right;

	MinHeapNode(char data, unsigned freq){
		left = right = NULL;
		this->data = data;
		this->freq = freq;
	}
};

struct compare {
	bool operator()(MinHeapNode* l, MinHeapNode* r){
		return (l->freq > r->freq);
	}
};

vector< pair <char,int> > var_count;

void printCodes(struct MinHeapNode* root, string str){
	if (!root) return;

	if (root->data != '_'){
		cout << root->data << ": " << str << "\n";
		var_count.push_back(make_pair(root->data,str.length()));
	}
		
	
	printCodes(root->left, str + "0");
	printCodes(root->right, str + "1");
}

void printPreorder(struct MinHeapNode* root){
    if (root == NULL)
        return;
 
    cout << root->data << " ";

    printPreorder(root->left);
 
    printPreorder(root->right);
}

struct MinHeapNode* HuffmanCodes(char data[], int freq[], int size){
	struct MinHeapNode *left, *right, *top;

	priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> minHeap;

	for (int i = 0; i < size; ++i)
		minHeap.push(new MinHeapNode(data[i], freq[i]));

	while (minHeap.size() != 1) {

		left = minHeap.top();
		minHeap.pop();

		right = minHeap.top();
		minHeap.pop();

		top = new MinHeapNode('_', left->freq + right->freq);

		top->left = left;
		top->right = right;

		minHeap.push(top);
	}
	return minHeap.top();
}

int decToBinBits(int n){
	int bits=0;
	while(pow(2,bits)<n){
		bits++;
	}
	return bits+1;
}

int main(){
	int size, var_bits, sum_freq;
	int flag=1,choice;
	cout<<"\nEnter the number of Unique Characters: ";
	cin>>size;
	char arr[size];
	int freq[size];
	struct MinHeapNode* ROOT;
	cout<<"\n0. Quit";
	cout<<"\n1. Input n unique characters with their frequencies into an array";
	cout<<"\n2. Display the Array";
	cout<<"\n3. Generate Huffman Tree and Traverse the tree with pre-order";
	cout<<"\n4. Generate Huffman Codes for n charachers and display the same";
	cout<<"\n5. Compare Huffman code with Fixed-Length Code"<<endl<<endl;

	do{
		cout<<"\nEnter your choice: ";
		cin>>choice;
		switch (choice)
		{
		case 0:
			flag=0;
			cout<<"\nExited!";
			break;
		case 1:
			cout<<"\nEnter the unique characters: ";
			for(int i=0;i<size;i++){
				cin>>arr[i];
			}
			cout<<"\nEnter the frequencies of the Characters: ";
			for(int i=0;i<size;i++){
				cin>>freq[i];
			}
			break;
		case 2:
			cout<<"\nCharacters:";
			for(int i=0;i<size;i++){
				cout<<" "<<arr[i];
			}
			cout<<"\nFrequencies:";
			for(int i=0;i<size;i++){
				cout<<" "<<freq[i];
			}
			cout<<endl;
			break;
		case 3:
			cout<<"\nGenerated Huffman Tree: ";
			ROOT = HuffmanCodes(arr, freq, size);
			printPreorder(ROOT);
			cout<<endl;
			break;
		case 4:
			cout<<"\nGenerated Huffman Codes: "<<endl;
			printCodes(ROOT, "");
			break;
		case 5:
			cout<<"\nComparing Huffman code with Fixed-Length Code: \n";
			var_bits=0;
			sort(var_count.begin(), var_count.end());
			cout<<"\nVariable Length Coding Requires : ";
			for(int i=0;i<var_count.size();i++){
				var_bits += var_count[i].second*freq[i];
			}
			cout<<var_bits<<" bits\n";
			sum_freq=0;
			for(int i=0;i<size;i++) sum_freq += freq[i];
			cout<<"Whereas Fixed Length Coding Requires: "<<decToBinBits(size)*sum_freq<<" bits";
			cout<<endl;
			break;
		default:
			cout<<"\nWrong Input!n";
			break;
		}
	}while(flag);

	return 0;
}

