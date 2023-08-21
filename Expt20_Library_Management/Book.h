
#ifndef BOOK_H
#define BOOK_H

#include <string>
#include vector



/**
  * class Book
  * 
  */

class Book
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Book ();

  /**
   * Empty Destructor
   */
  virtual ~Book ();

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
  void Show_details ()
  {
  }


  /**
   */
  void Reservation_status ()
  {
  }


  /**
   */
  void Feedback ()
  {
  }


  /**
   */
  void Book_request ()
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

  string Title;
  string Author;
  void ISBN;
  void Publication;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Title
   * @param new_var the new value of Title
   */
  void setTitle (string new_var)   {
      Title = new_var;
  }

  /**
   * Get the value of Title
   * @return the value of Title
   */
  string getTitle ()   {
    return Title;
  }

  /**
   * Set the value of Author
   * @param new_var the new value of Author
   */
  void setAuthor (string new_var)   {
      Author = new_var;
  }

  /**
   * Get the value of Author
   * @return the value of Author
   */
  string getAuthor ()   {
    return Author;
  }

  /**
   * Set the value of ISBN
   * @param new_var the new value of ISBN
   */
  void setISBN (void new_var)   {
      ISBN = new_var;
  }

  /**
   * Get the value of ISBN
   * @return the value of ISBN
   */
  void getISBN ()   {
    return ISBN;
  }

  /**
   * Set the value of Publication
   * @param new_var the new value of Publication
   */
  void setPublication (void new_var)   {
      Publication = new_var;
  }

  /**
   * Get the value of Publication
   * @return the value of Publication
   */
  void getPublication ()   {
    return Publication;
  }
private:


  void initAttributes () ;

};

#endif // BOOK_H
