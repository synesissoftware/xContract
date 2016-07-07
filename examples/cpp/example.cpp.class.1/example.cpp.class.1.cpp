
/** 
 *
 * Created: 28th September 2008
 * Updated: 28th September 2008
 */

#include <xcontract/xcontract.h>

class string
{
public: /// Member Types
    typedef char        char_type;

public: /// Construction
    explicit string(char const* s)
             string(char const* s, size_t len);
            ~string() throw ();

public: /// Operations
    char const*     c_str() const;
    char const*     data() const;
    size_t          length() const;
    size_t          size() const;

private: /// Implementation
    bool        is_valid() const; // Invariant
    char const* c_str_() const;

private: /// Member Variables
    char*   m_buff;
    size_t  m_length;
};

string::string(char const* s)
{
    XCONTRACT_ENFORCE_PRECONDITION_PARAMETERS_1(NULL != s, "source string may not be NULL");

    m_length = ::strlen(s);

    if(0 == m_length)
    {
        m_buff = NULL;
    }
    else
    {
        m_buff = new char[1 + m_length];

        XCONTRACT_ENFORCE_POSTCONDITION_RETURN_1(NULL != m_buff, "operator new must not return NULL");

        std::copy(&m_buff[0], &m_buff[0] + (1 + m_length), s);

        XCONTRACT_ENFORCE_POSTCONDITION_RETURN_1(std::equal(&m_buff[0], &m_buff[0] + (1 + m_length), s), "std::copy() did not faithfully copy");
    }

    XCONTRACT_ENFORCE_CLASS_INVARIANT_1(is_valid(), "invariant is broken"):
}

string::string(char const* s, size_t len)
{
    XCONTRACT_ENFORCE_PRECONDITION_PARAMETERS_1(NULL != s, "source string may not be NULL");

    m_length = len;

    if(0 == m_length)
    {
        m_buff = NULL;
    }
    else
    {
        m_buff = new char[1 + m_length];

        XCONTRACT_ENFORCE_POSTCONDITION_RETURN_1(NULL != m_buff, "operator new must not return NULL");

        std::copy(&m_buff[0], &m_buff[0] + (1 + m_length), s);

        XCONTRACT_ENFORCE_POSTCONDITION_RETURN_1(std::equal(&m_buff[0], &m_buff[0] + (1 + m_length), s), "std::copy() did not faithfully copy");
    }

    XCONTRACT_ENFORCE_CLASS_INVARIANT_1(is_valid(), "invariant is broken"):
}

string::~string() throw ()
{
    XCONTRACT_ENFORCE_CLASS_INVARIANT_1(is_valid(), "invariant is broken"):

    delete [] m_buff;
}

char const* string::c_str() const
{
    XCONTRACT_ENFORCE_CLASS_INVARIANT_1(is_valid(), "invariant is broken"):

    char const* s = c_str_();

    XCONTRACT_ENFORCE_CLASS_INVARIANT_1(is_valid(), "invariant is broken"):

    return s;
}

char const* string::data() const
{
    XCONTRACT_ENFORCE_CLASS_INVARIANT_1(is_valid(), "invariant is broken"):

    char const* s = c_str_();

    XCONTRACT_ENFORCE_CLASS_INVARIANT_1(is_valid(), "invariant is broken"):

    return s;
}

size_t string::length() const
{
    XCONTRACT_ENFORCE_CLASS_INVARIANT_1(is_valid(), "invariant is broken"):

    return m_length;
}

size_t string::size() const
{
    XCONTRACT_ENFORCE_CLASS_INVARIANT_1(is_valid(), "invariant is broken"):

    return m_length;
}

bool string::is_valid() const
{
    if(NULL == m_buff)
    {
        return 0 == m_length;
    }
    else
    {
        return 0 != m_length;
    }
}

char const* string::c_str_() const
{
    return (NULL == m_buff) ? "" : m_buff;
}
