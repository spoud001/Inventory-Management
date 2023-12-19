
The exectuable file only runs in windows. 
The executable file is located in the Executable Inventory folder and is named InventoryManagement.exe.
The CSV file of inventory that we want our executable to read should be in the same folder and should exist.

To view the source code and headers, UI forms or to open the QT project folder, go to "Inventory Management files" folder ->"InventoryManagement" folder and then open InventoryManagement.pro file, this will open in QT Creator software. 
The inventory.csv and order.csv files for the building will be saved in "Inventory Management files"->"build-InventoryManagement-Desktop_Qt_6_6_0_MinGW_64_bit-Debug" folder. 
If you update or want to update csv file please do so in the csv file located in the build folder. 

For Admin Login: 
Use username: admin and password:admin12
You can load inventory once but after modifying or using any feature make sure to use the save the inventory to file option,
only then will the inventory be updated i.e. CSV file will be updated. If you do not load the inventory then findproduct, removeproducts like features will not work. If you create a new product without loading the inventory and save it to the inventory, your existing content of the CSV files will be cleared and replaced by the new product that you added without loading.

Currently there is no order.csv file because we have not placed any orders so when you select vieworder option the table will be blank. 

For placing an order:
select the category, and browse from the selected category and use the spin box to enter desired quantity, you have to add it to cart and from there if you want to add more then continue shopping else proceed to checkout. You can only add different product from same category, you cannot change the category and add item to the cart. 
Enter all the customer details and then buy and if you want to print or save your receipt window you can do so by clicking on print button. 


Once the user places an order, admin can view it through the admin login window from vieworder. 

Also, the order.csv file in the executable file location will be updated with the new order details if the order.csv file exists or else the file will be created if it does not exists. 