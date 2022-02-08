struct Queue *modifyQueue(struct Queue *queue, int n, int k) {
    // code here
    int arr[k];
    
    for(int i=0;i<k;i++){
        arr[i] = front(queue);
        dequeue(queue);
    }
    
    for(int i=k-1;i>=0;i--){
        enqueue(queue,arr[i]);
    }
    
    for(int i=0;i<n-k;i++){
        int a = front(queue);
        dequeue(queue);
        enqueue(queue,a);
    }
    
    return queue;
}
