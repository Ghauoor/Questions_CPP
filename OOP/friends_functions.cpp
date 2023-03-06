class MyClass
{
private:
    int value;

    friend void setMyClassValue(MyClass &obj, int newValue);
};

void setMyClassValue(MyClass &obj, int newValue)
{
    obj.value = newValue;
}

int main()
{
    MyClass obj;
    setMyClassValue(obj, 42);
    return 0;
}
