#ifndef ARRAY_DYNAMIC_ARRAY_H
#define ARRAY_DYNAMIC_ARRAY_H


template<class T>
class DynamicArray {
private:
    T* array;
    int size;

public:
    DynamicArray();
    explicit DynamicArray(int size);
    DynamicArray(const DynamicArray& other);
    ~DynamicArray();

    T getMaxElement() const;
    T getMinElement() const;
    T* getAddressOfMaxElement() const;
    T* getAddressOfMinElement() const;
    void resize(int newSize);
    DynamicArray& operator=(const DynamicArray& other);
    T& operator[](int index);
    int getSize() const;
};

#endif //ARRAY_DYNAMIC_ARRAY_H
