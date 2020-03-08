

using namespace std;

template<typename T>
class SmartPointer
{
    private:
        T* pointer;
    public:
        SmartPointer(const T* pointer) : pointer(pointer) {}
        ~SmartPointer(){delete pointer;};
        SmartPointer& operator=(const SmartPointer& other);
        T& operator* () const
        {
            return *(pointer);
        }

        T* operator->() const
        {
            return pointer;
        }
};

