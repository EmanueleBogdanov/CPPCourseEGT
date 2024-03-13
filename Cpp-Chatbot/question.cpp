#include "question.h"

question::question()
{
    m_query = "";
    m_answer = "";
}

question::question(std::string question, std::string m_answer)
{
    m_query = question;
    this->m_answer = m_answer;
}

std::string question::m_getQuery()
{
    return m_query;
}

std::string question::m_getAnswer()
{
    return m_answer;
}

question::~question()
{
}
