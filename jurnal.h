//Journal: title, volume, issue, publish year, subject
class Jurnal : public Material
{
    public:
    Jurnal( std::string title , int volume , int issue , int year, std::string & subject , bool borrow = false) :
    Material( borrow), 
    m_title(title) ,  
    m_volume(volume), 
    m_issue(issue),  
    m_year(year), 
    m_subject(subject)
    {}
    void display(){
        std::cout << "Title : " << m_title << std::endl;
        std::cout << "Volume : " << m_volume << std::endl;
        std::cout << "Issue  : " << m_issue << std::endl;
        std::cout << "Publish year : " << m_year << std::endl;
        std::cout << "Subject : " << m_subject << std::endl;
        std::cout << std::boolalpha << "Is borrowed : " << getBorrowed() << std::endl;
}
    std::string get_title()const { return m_title;}
   private:
    std::string m_title;
    int m_volume;
    int m_issue;
    int m_year;
    std::string m_subject;
};
