#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}

template <typename T>
void Reverse_single_linked_list()
{
    T *current = new Single_list;
    T *previous = new Single_list;
    T *next = new Single_list;
    current = current->head;
    while (current != nullptr)
    {
       next = current->next;
       current->next = previous;
       previous = current;
       current = next;
    }
    current->head = previous;//head equals last element
    //first_element = nullptr;
}
