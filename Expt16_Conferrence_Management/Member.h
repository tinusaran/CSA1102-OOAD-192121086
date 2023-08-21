
#ifndef MEMBER_H
#define MEMBER_H

#include <string>

/**
  * class Member
  * 
  */

class Member
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Member ();

  /**
   * Empty Destructor
   */
  virtual ~Member ();

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
  void presentingthe_paper ()
  {
  }


  /**
   */
  void winningthe_prize ()
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

  void Name;
  void id;
  void proof;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (void new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  void getName ()   {
    return Name;
  }

  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (void new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId ()   {
    return id;
  }

  /**
   * Set the value of proof
   * @param new_var the new value of proof
   */
  void setProof (void new_var)   {
      proof = new_var;
  }

  /**
   * Get the value of proof
   * @return the value of proof
   */
  void getProof ()   {
    return proof;
  }
private:


  void initAttributes () ;

};

#endif // MEMBER_H
