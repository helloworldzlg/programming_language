#include <iostream>
// �����ͷ�ļ���
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

// �̵߳����к���
void* say_hello(void* args)
{
	int id = *(int *)args;
	
    cout << " Hello Runoob��" << id << endl;
}

int main()
{
    // �����̵߳� id �������������ʹ������
    pthread_t tids[NUM_THREADS];
    int threadId[NUM_THREADS];
    for(int i = 0; i < NUM_THREADS; ++i)
    {
    	threadId[i] = i;
    	
        //���������ǣ��������߳�id���̲߳��������õĺ���������ĺ�������
        int ret = pthread_create(&tids[i], NULL, say_hello, &threadId[i]);
        if (ret != 0)
        {
           cout << "pthread_create error: error_code=" << ret << endl;
        }
    }
    
    //cout << "1111" << endl;
    
    //�ȸ����߳��˳��󣬽��̲Ž������������ǿ�ƽ����ˣ��߳̿��ܻ�û��Ӧ������
    pthread_exit(NULL);
    
    cout << "2222" << endl;
}
