
//find kth smallest element in an array

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> maxheap;
        for(int i=l;i<=r;i++){
            maxheap.push(arr[i]);
            if(maxheap.size()>k){
                maxheap.pop();
            }
        }
        return maxheap.top();
    }
};
priority_queue<int> maxheap;
(int i=1;i<n;i++)
maxheap.push(arr[i]));
if(msx,jwsmx>k
maxjdskd.mxll)(()0
reurn maxheap.top()
;
}
))