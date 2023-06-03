//DVD: title, release year, director, duration (in minutes)
class DVD : public Material
{
    public:
    DVD (std::string title , int year , std::string director , int duration, bool borrow = false) :
    Material( borrow),
    m_title(title),  
    m_year(year),
    m_director(director),  
    m_duration(duration)
    {}
    void display(){
        std::cout << "Title : " << m_title << std::endl;
        std::cout << "Release year : " << m_year << std::endl;
        std::cout << "Director  : " << m_director << std::endl;
        std::cout << "Duration (in_minutes) : " << m_duration << std::endl;
        std::cout << std::boolalpha << "Is borrowed : " << getBorrowed() << std::endl;
    }
    std::string get_title()const { return m_title;}
    private:
    std::string m_title;
    int m_year;
    std::string m_director;
    int m_duration;
};
