boot Del_min(SqList L,ElemType &code){
    //删除顺序表L中的最小元素结点，通过code返回值
    //删除成功返回ture
    if(L.length==0)
        return 0;
    code = L.data[0];
    int mincode = 0;
    for(int i=1;i<L.length;i++)
        if(L.data[i]<code){
        code = L.data[i];
        mincode = i;
    }
    L.data[mincode] = L.data[L.length-1];
    L.length--;
    return ture;
}