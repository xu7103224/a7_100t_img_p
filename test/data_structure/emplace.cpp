#include<iostream>
// Book结构，保存书本信息

struct SBook {
    SBook() : bookName(""), price(0)
        { std::cout << "default construct: " << bookName << std::endl; }
    SBook(std::string bookName_, int price_) : bookName(bookName_), price(price_)
        { std::cout << "construct: " << bookName << std::endl; };
    SBook(SBook& rhs) : bookName(rhs.bookName), price(rhs.price)
        { std::cout << "copy construct: " << bookName << std::endl; }
    ~SBook() { std::cout << "deconstruct: " << bookName << std::endl; }
    bool operator <(const SBook& rhs) const{ return bookName < rhs.bookName; }
    std::string bookName;
    int price;
};
int main(){
    // 测试vector
    vector<SBook> books;
    // 预先分配，否则整个vector在容量不够的情况下重新分配内存
    
    books.reserve(100);
    std::cout << "test push_back:" << endl;
    books.push_back(SBook("C++从入门到放弃", 1));
    std::cout << endl;
    std::cout << "test emplace_back:" << endl;
    books.emplace_back("水浒传", 2);
    std::cout << endl;
    std::cout << "test emplace_back default:" << endl;
    books.emplace_back();
    auto& book = books.back();
    book.bookName = "红楼梦";
    book.price = 5; std::cout << endl; std::cout << "test emplace:" << endl; auto it = books.emplace(books.end()); it->bookName = "西游记"; it->price = 3; std::cout << endl; std::cout << "output all books: " << endl; for_each(books.begin(), books.end(), [](const SBook& book)->void { std::cout << book.bookName << endl; }); std::cout << endl;​ ​
    // 测试set
set<SBook> bookSet;​ ​ std::cout << "test bookSet insert:" << endl; bookSet.insert(SBook("十万个为什么", 1)); std::cout << endl; ​ ​std::cout<< "test bookSet emplace:" << endl; bookSet.emplace("新华字典", 2); std::cout << endl; ​ ​std::cout<< "output bookset: " << endl; for_each(bookSet.begin(), bookSet.end(), [](const SBook&book)->void { std::cout << book.bookName << endl; }); std::cout << endl;


return 0;
}
