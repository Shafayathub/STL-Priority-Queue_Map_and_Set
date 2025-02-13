#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Max Priority_queue like max heap.
    // priority_queue<int> pq;

    // Min priority_queue like min heap.
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(12);
    pq.push(100);
    pq.push(30);

    cout << pq.top() << " ";

    // 

    return 0;
}