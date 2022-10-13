Movie Rental Management System (Blockbuster)

Features
-Admin and Customer account sign up and login
-Admin can add and remove movies from the list and edit the properties of movies
-Customer account shows movies rented, returned and yet to return movies and amount in account.
-Movies are grouped in categories(genre)
-Movies can be searched by name and keyword
-Customer account has can be recharged in dollars and when a book is rented the amount is deducted.
-Movies have properties like, ratings, price, plot description, picture if possible.
-Customers can either be gold, sliver or bronze members based on how much movies they’ve rented and can get discounts based on this.

Classes

    Movie
        attributes
            name
            genre
            rating
            price
            plot description
            picture
            available or rented out
    Pages
        sub pages - home, search, movie page, account page, 
    Account
            name
            rank
            email
            shipping address
        sub account - admin and customer
        customer account attributes
            amount in account
            rank
            currently rented books (yet to retuned)
            returned books - TO BE CONSIDERED
        admin account attributes
