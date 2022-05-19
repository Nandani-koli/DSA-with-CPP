#include <iostream>
using namespace std;
void swap (int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
class minHeap{
    int *heap;
    int capacity;
    int heapSize;

public:
    minHeap(int cap)
    {
        heapSize = 0;
        capacity = cap;
        heap = new int[cap];
    }

    int parent(int i)
    {
        return (i-1)/2;
    }

    int left(int i)
    {
        return (2*i) + 1;
    }

    int right(int i)
    {
        return (2*i) + 2;
    }

    void insert(int key)
    {
        if(heapSize == capacity)
        {
            cout<<"Heap Full"<<endl;
            return;
        }
        heapSize++;
        int i = heapSize - 1;
        heap[i] = key;

        while(i != 0 && heap[parent(i)] > heap[i])
        {
          swap(heap[i],heap[parent(i)]);
          i = parent(i);
        }
    }

    void printheap()
    {
        for(int i = 0; i < heapSize; i++)
        {
            cout<<heap[i]<<" ";
        }
        cout<<endl;
    }

    void heapify(int i)
    {
        int l = left(i);
        int r = right(i);
        int smallest = i;
        if(l < heapSize && heap[l] < heap[i])
        {
            smallest = l;
        }
        if(r < heapSize && heap[r] < heap[smallest])
        {
            smallest = r;
        }
        if(smallest != i)
        {
            swap(heap[i], heap[smallest]);
            heapify(smallest);
        }
    }

    int extractMin()
    {
        if(heapSize <= 0)
        {
            cout<<"Empty Heap"<<endl;
            return INT8_MAX;
        }
        if(heapSize == 1)
        {
            heapSize--;
            return heap[0];
        }

        int root = heap[0];
        heap[0] = heap[heapSize-1];
        heapSize--;

        heapify(0);
        return root;
    }
};

int main()
{
    minHeap heap1(5);
   
    heap1.insert(50);
    heap1.insert(10);
    heap1.insert(40);
    heap1.insert(20);
    heap1.insert(30);
    
    
    heap1.insert(5);            //heap full 

    cout<<heap1.parent(4)<<endl;
    heap1.printheap();
    cout<<heap1.extractMin()<<endl;
    heap1.printheap();
    heap1.insert(10);
    heap1.printheap();
    return 0;
}