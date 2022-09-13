#include <iostream>
using namespace std;

int Qarr[10001];
int front, rear = 0;
int N;


void Push(){
    int num;
    cin >> num;
    Qarr[rear++] = num;
}

void Pop(){
    if (front == rear) {cout << -1 << '\n';}
    else {
        cout << Qarr[front++] << '\n';
    }
}

void Size(){
    cout << rear - front << '\n';
}

void Empty(){
    if (front == rear) {cout << 1 << '\n';}
    else {cout << 0 << '\n';}
}

void Front(){
    if (front == rear) {cout << -1 << '\n';}
    else {cout << Qarr[front] << '\n';}
}

void Back(){
    if (front == rear) {cout << -1 << '\n';}
    else {cout << Qarr[rear-1] << '\n';}
}


int main(void){
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
    
    string order;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> order;

        if(order == "push") Push();
        if(order == "pop") Pop();
        if(order == "size") Size();
        if(order == "empty") Empty();
        if(order == "front") Front();
        if(order == "back") Back();
    }
}