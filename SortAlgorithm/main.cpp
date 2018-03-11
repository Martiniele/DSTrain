#include <iostream>
#include "SortAlgorithm.h"
/*******************************************************************************
	主函数
 *******************************************************************************/
int main(int argc, const char * argv[]) {

    time_t first, second;
//    system("ipconfig");
    time(&first);
//    first = time(NULL);
    sleep(5);
    time(&second);
//    second = time(NULL);
    printf("The difference is: %f seconds\n",difftime(second,first));


    // insert code here...
    cout<<"\n**              排序算法比较                      **"<<endl;
    cout<<"===================================================="<<endl;
    cout<<"**              1 --- 冒泡排序                    **"<<endl;
    cout<<"**              2 --- 选择排序                    **"<<endl;
    cout<<"**              3 --- 直接插入排序                **"<<endl;
    cout<<"**              4 --- 希尔排序                    **"<<endl;
    cout<<"**              5 --- 快速排序                    **"<<endl;
    cout<<"**              6 --- 堆排序                      **"<<endl;
    cout<<"**              7 --- 归并排序                    **"<<endl;
    cout<<"**              8 --- 基数排序                    **"<<endl;
    cout<<"**              9 --- 退出程序                    **"<<endl;
    cout<<"===================================================="<<endl;

    cout << "\n请输入要产生的随机数的个数：";
    int n;
    cin >> n;
    cout << endl;
    long *a = new long [n];
    srand((unsigned int)time(NULL));
    for (long i = 0; i < n; i ++)
    {
        a[i] = rand() % n;
    }

    operate(a, n);

    return 0;
}