
/*
 * 1.Syntax Explanation:
 *
 * int *ptr = &var
 * We can access the value from &var
 * Можем да получим достъп до стойността на var.
 *
 * Пример:
 * Еxample:
 * int x = 3;
 * int *ptr = &var;
 * cout << *ptr << endl;
 * ***************************************************************************************************************
 *
 *
 * 2.Concept Clarification:
 * В While цикъл първо проверява условието, след което влиза в тялото на цикъла. Aко е грешно, няма да се изпълни.
 *
 * In While loop first checks the condition. After that cheks the body, if condition is false the loop ends.
 *
 * Пример;
 *
 * int a = 0;
 *
 * while(a <= 5){  //this example is working.
 *
 * cout << "Hello" << endl;
 * {
 *
 * int a = 1;
 *
 *
 * do
 * {
 *
 * cout << "Hello" << endl;
 *
 *
 * }while(a != 0);
 *
 * ***************************************************************************************************************
 *
 *
 * 3.Code Analysis:
 * В този пример с for цикъл обхождаме числата от 0 до 99 и ги принтираме.
 * In this example with for lopp iterates the numbers from 0 to 99 and we print them.
 * Пример:
 * Example:
 *for(int i = 0; i <= 100; i++)
 *{
 *  cout << i << endl;
 *
 *}
 ****************************************************************************************************************
 *
 *
 * 4.Function Usage:
 *
 * Функцията е самостоятелен блок от код, който изпълнява конкретна задача и може да се извиква повторно.
 *  Помага кода да не се дублира.
 *
 *  The function is block of code that performs the specific task and invoke again.
 *
// Function to calculate the square of a number
    int square(int num) {
    return num * num;
}

int main() {
    // Example usage of the square function
    int number = 5;
    int result = square(number);

    std::cout << "The square of " << number << " is: " << result << std::endl;

    return 0;
}
 *
 *
 ****************************************************************************************************************
 *
 *
 *5. Memory Management;
 *Stack is a linear data structure whereas Heap is a hierarchical data structure.
  Stack memory will never become fragmented whereas Heap memory can become fragmented as blocks of memory are first allocated and then freed.
  Stack accesses local variables only while Heap allows you to access variables globally.
  Stack variables can’t be resized whereas Heap variables can be resized.
  Stack memory is allocated in a contiguous block whereas Heap memory is allocated in any random order.
  Stack doesn’t require to de-allocate variables whereas in Heap de-allocation is needed.
  Stack allocation and deallocation are done by compiler instructions whereas Heap allocation and deallocation is done by the programmer.

  Stack е линейна структура от данни, докато Heap е йерархична структура от данни.
  Паметта на stack никога няма да бъде фрагментирана, докато паметта на heap може да стане фрагментирана, тъй като блоковете памет първо се разпределят и след това се освобождават.
  Stack има достъп само до локални променливи, докато Heap ви позволява глобален достъп до променливи.
  Променливите на stack не могат да бъдат преоразмерени, докато променливите на heap могат да бъдат преоразмерени.
  Паметта на stack се разпределя в непрекъснат блок, докато паметта на heap се разпределя в произволен ред.
  Stack не изисква де-алокация на променливи, докато в Heap е необходимо де-алокация.
  Разпределението и освобождаването на stack се извършва от инструкции на компилатора, докато разпределението и освобождаването на Heap се извършва от програмиста.


******************************************************************************************************************

  6.Object-Oriented Programming:
  Explain the concept of encapsulation in C++ and how it is achieved using classes.
  Encapsulation is a fundamental concept in object-oriented programming (OOP)
  that involves bundling data and methods that operate on that data within a single unit called a class.
  Encapsulation hides the internal state of an object from the outside world and provides controlled
  access to that state through methods or member functions. This helps in achieving data abstraction,
  information hiding, and modularization, which are key principles of OOP.

 Капсулацията е фундаментална концепция в обектно-ориентираното програмиране (ООП), която включва групиране на данни и методи,
 които работят с тези данни в рамките на една единица, наречена клас.
 Капсулирането скрива вътрешното състояние на обект от външния свят и осигурява контролиран достъп до това състояние чрез методи или членски функции.
 Това помага за постигане на абстракция на данни, скриване на информация и модулиране, които са ключови принципи на ООП.


Example:
class Box
{
public:
    Box(int width, int length, int height);
    friend Box operator+(Box, Box);


    int getWidth() const;
    void setWidth(int newWidth);

    int getLength() const;
    void setLength(int newLength);

    int getHeight() const;
    void setHeight(int newHeight);

    void print();

private:
    int width;
    int length;
    int height;

*********************************************************************************************************************


 7 Error Handling:



8. STL Containers:

Вектор е с много функции и много често се използва. Предодставен е от STL.
Съхранява и работи с последователни елементи от един и същи тип.
Vector is multi-functional and frequently used. From STL.
it is saving and working with secuences elements from one kind.
Example:
 std::vector<int> vec;

    // Add elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Access elements using indexing
    std::cout << "Elements of the vector:" << std::endl;
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << "vec[" << i << "] = " << vec[i] << std::endl;
    }
};

 */



