
#ifndef PAPER_H
#define PAPER_H

#include <string>

/**
  * class Paper
  * 
  */

class Paper
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Paper ();

  /**
   * Empty Destructor
   */
  virtual ~Paper ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  string title;
  string abstract;
  string content;
  Date Submmited;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of title
   * @param new_var the new value of title
   */
  void setTitle (string new_var)   {
      title = new_var;
  }

  /**
   * Get the value of title
   * @return the value of title
   */
  string getTitle ()   {
    return title;
  }

  /**
   * Set the value of abstract
   * @param new_var the new value of abstract
   */
  void setAbstract (string new_var)   {
      abstract = new_var;
  }

  /**
   * Get the value of abstract
   * @return the value of abstract
   */
  string getAbstract ()   {
    return abstract;
  }

  /**
   * Set the value of content
   * @param new_var the new value of content
   */
  void setContent (string new_var)   {
      content = new_var;
  }

  /**
   * Get the value of content
   * @return the value of content
   */
  string getContent ()   {
    return content;
  }

  /**
   * Set the value of Submmited
   * @param new_var the new value of Submmited
   */
  void setSubmmited (Date new_var)   {
      Submmited = new_var;
  }

  /**
   * Get the value of Submmited
   * @return the value of Submmited
   */
  Date getSubmmited ()   {
    return Submmited;
  }
private:


  void initAttributes () ;

};

#endif // PAPER_H
