void sort(int *ptr,int size){
    int r,i,t;
    for(r=1;r<=size-1;r++){
        for(i=0;i<size-1-r;i++){
            if(ptr[i]>ptr[i+1]){
                t=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=t;
            }
        }
    }
}
