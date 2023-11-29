#pragma once
template <typename T>
class Vector {
private:
    T* array;
    int size;
    int capacity;

public:
    Vector() : size(0), capacity(10) {
        array = new T[capacity];
    }

    ~Vector() {
        delete[] array;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }

    void push_back(T element) {
        if (size == capacity) {
            T* temp = new T[2 * capacity];
            for (int i = 0; i < size; i++) {
                temp[i] = array[i];
            }
            delete[] array;
            capacity *= 2;
            array = temp;
        }
        array[size] = element;
        size++;
    }

    void pop_back() {
        if (size > 0) {
            size--;
        }
    }

    T at(int index) {
        if (index < size) {
            return array[index];
        }
        return T();
    }

    T operator [](int index) {
        return at(index);
    }
};
