#include <iostream>
#include <queue>
using namespace std;

void deleteRemaining(queue<int>& q, int queueSize)
{   
    if(q.size() > queueSize){
        cout << "Size:" << q.size() << " Removing last element." << endl;
        while(q.size() > queueSize){
            q.pop();
        }
    }
}

void printQueue(queue<int> q)
{
	int qsize = q.size();
	while (!q.empty()){
		cout<<" "<<q.front();
		q.pop();
	}
	cout << ". Size:" << qsize << endl;
}

int main () {
    queue<int> q; 
    int queueSize = 6;

    for (size_t i=0; i<12; ++i)
    {
        q.push(i+1);
    }
    printQueue(q);

    for(int i=0; i<5; ++i)
        q.pop();
    printQueue(q);

    deleteRemaining(q, queueSize);

    for (int i=1; i<5; ++i){
        q.push(q.size()+i);
        deleteRemaining(q, queueSize);
    }
    
    printQueue(q);
}
