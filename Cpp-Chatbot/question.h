#ifndef QUESTION_H
#define QUESTION_H

#include <string>

class question
{
public:
    question();
    question(std::string question, std::string m_answer);
    std::string m_getQuery();
    std::string m_getAnswer();
    ~question();

private:
    std::string m_query;
    std::string m_answer;

};
#endif // QUESTION_H
