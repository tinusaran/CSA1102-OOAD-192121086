
#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <string>

/**
  * class Feedback
  * 
  */

class Feedback
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Feedback ();

  /**
   * Empty Destructor
   */
  virtual ~Feedback ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void GetFeedBack ()
  {
  }

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

  string UserName;
  int Id;
  string Feedback;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of UserName
   * @param new_var the new value of UserName
   */
  void setUserName (string new_var)   {
      UserName = new_var;
  }

  /**
   * Get the value of UserName
   * @return the value of UserName
   */
  string getUserName ()   {
    return UserName;
  }

  /**
   * Set the value of Id
   * @param new_var the new value of Id
   */
  void setId (int new_var)   {
      Id = new_var;
  }

  /**
   * Get the value of Id
   * @return the value of Id
   */
  int getId ()   {
    return Id;
  }

  /**
   * Set the value of Feedback
   * @param new_var the new value of Feedback
   */
  void setFeedback (string new_var)   {
      Feedback = new_var;
  }

  /**
   * Get the value of Feedback
   * @return the value of Feedback
   */
  string getFeedback ()   {
    return Feedback;
  }
private:


  void initAttributes () ;

};

#endif // FEEDBACK_H
