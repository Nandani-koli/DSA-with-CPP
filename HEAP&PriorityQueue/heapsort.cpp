#include <iostream>
using namespace std;
class minHeap
{
    int *heap;
    int heapsize;
    int capacity;

public:
    minHeap(int cap)
    {
        capacity = cap;
        heapsize = cap;
        heap = new int[cap];
    }
    void getinput()
    {
        for (int i = 0; i < capacity; i++)
        {
            cin >> heap[i];
        }
    }
    void printheap()
    {
        for (int i = 0; i < heapsize; i++)
        {
            cout << heap[i] << " ";
        }
        cout << "\n";
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }
    int left(int i)
    {
        return (2 * i) + 1;
    }
    int right(int i)
    {
        return (2 * i) + 2;
    }
    void heapify(int i)
    {
        int l = left(i);
        int r = right(i);
        int smallest = i;

        if (l < heapsize && heap[l] < heap[i])
        {
            smallest = l;
        }
        if (r < heapsize && heap[r] < heap[smallest])
        {
            smallest = r;
        }
        if (smallest != i)
        {
            swap(heap[i], heap[smallest]);
            heapify(smallest);
        }
    }

    int extractMin()
    {
        if (heap == NULL)
        {
            cout << "Heap is Empty\n";
        }
        if (heapsize == 1)
        {
            return heap[0];
        }
        int root = heap[0];
        heap[0] = heap[heapsize - 1];
        heapsize--;
        heapify(0);

        return root;
    }

    void heapSort()
    {
        int temp[capacity];
        for(int j= 0; j < capacity; j++)
        {
            temp[j] = extractMin();
            cout<<temp[j]<<" ";
        }
        cout<<"\n";
    }
};
int main()
{
    int n;
    cin >> n;
    minHeap heap1(n);
    heap1.getinput();

    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        heap1.heapify(i);
    }

    heap1.printheap();

    heap1.heapSort();
}