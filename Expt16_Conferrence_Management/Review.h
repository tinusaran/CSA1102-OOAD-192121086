
#ifndef REVIEW_H
#define REVIEW_H

#include <string>

/**
  * class Review
  * 
  */

class Review
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Review ();

  /**
   * Empty Destructor
   */
  virtual ~Review ();

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

  Date Received;
  string Content;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Received
   * @param new_var the new value of Received
   */
  void setReceived (Date new_var)   {
      Received = new_var;
  }

  /**
   * Get the value of Received
   * @return the value of Received
   */
  Date getReceived ()   {
    return Received;
  }

  /**
   * Set the value of Content
   * @param new_var the new value of Content
   */
  void setContent (string new_var)   {
      Content = new_var;
  }

  /**
   * Get the value of Content
   * @return the value of Content
   */
  string getContent ()   {
    return Content;
  }
private:


  void initAttributes () ;

};

#endif // REVIEW_H
