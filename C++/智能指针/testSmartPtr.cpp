#include <iostream>

using namespace std;

class U_Ptr
{
	friend class HasPtr;
	int* ip;
	size_t use;
	
	U_Ptr(int* p) : ip(p), use(1) {
		cout << "U_Ptr constructor called !" << endl;
	}
	
	~U_Ptr() {
		delete ip;
		cout << "U_Ptr distructor called !" << endl; 
	}
};

class HasPtr
{
public:
	HasPtr(int* p, int i) : ptr(new U_Ptr(p)), val(i) {
		cout << "HasPtr constructor called !" << "use = " << ptr->use << endl; 
	}
	
	HasPtr(const HasPtr& orig) : ptr(orig.ptr), val(orig.val) {
		cout << "HasPtr copy constructor called !" << "use = " << ptr->use << endl;  
	}
	
	HasPtr& operator=(const HasPtr&);
	
	~HasPtr()  
    {  
        cout << "HasPtr distructor called ! " << "use = " << ptr->use << endl;  
        if (--ptr->use == 0)  
            delete ptr;  
    }
    
    int *get_ptr() const  
    {  
        return ptr->ip;  
    }
	
	int get_int() const  
    {  
        return val;  
    }
	
	void set_ptr(int *p) const  
    {  
        ptr->ip = p;  
    } 
	
	void set_int(int i)  
    {  
        val = i;  
    } 
	
	int get_ptr_val() const  
    {  
        return *ptr->ip;  
    }
	
	void set_ptr_val(int i)  
    {  
        *ptr->ip = i;  
    } 
	
private:  
    U_Ptr *ptr;   
    int val;  
};

HasPtr& HasPtr::operator = (const HasPtr &rhs)  //注意，这里赋值操作符在减少做操作数的使用计数之前使rhs的使用技术加1，从而防止自我赋值  
{  
    // 增加右操作数中的使用计数  
    ++rhs.ptr->use;  
    // 将左操作数对象的使用计数减1，若该对象的使用计数减至0，则删除该对象  
    if (--ptr->use == 0)  
        delete ptr;  
    ptr = rhs.ptr;   // 复制U_Ptr指针  
    val = rhs.val;   // 复制int成员  
    return *this;  
}  

int main(void)  
{  
    int *pi = new int(42);  
    HasPtr *hpa = new HasPtr(pi, 100);    // 构造函数  
    HasPtr *hpb = new HasPtr(*hpa);       // 拷贝构造函数  
    HasPtr *hpc = new HasPtr(*hpb);       // 拷贝构造函数  
    HasPtr hpd = *hpa;                    // 拷贝构造函数  
  
    cout << hpa->get_ptr_val() << " " << hpb->get_ptr_val() << endl;  
    hpc->set_ptr_val(10000);  
    cout << hpa->get_ptr_val() << " " << hpb->get_ptr_val() << endl;  
    hpd.set_ptr_val(10);  
    cout << hpa->get_ptr_val() << " " << hpb->get_ptr_val() << endl;  
    delete hpa;  
    delete hpb;  
    delete hpc;  
    cout << hpd.get_ptr_val() << endl;  
    return 0;  
}  


