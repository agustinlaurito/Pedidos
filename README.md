# Pedidos
Software to organize production teams.

The main function of the program is to show data from the ERP Software database in a user-friendly way. 

The connection to the ODBC port is created using QT ODBC Handler. The program looks for the Database listening on port 3306 and then creates a virtual query to improve performance.
Due to the database size the queries are really slow so they are made in a separate thread to not block the UI Main Thread. Then, it saves it to an array to be able to look for data
without needing to make another query. 

This program is focused on showing the pending orders to the workers in the warehouse area so they can prepare it. Every order is saved in an object with the following properties:
- Order Number and Client name
- Order Creation Date
- Items of the order with their quantities and stock available on the warehouse
- Delivery method and address
- Payment method and current state
