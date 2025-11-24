import mysql.connector

# Replace with your actual database credentials
config = {
    "host": "your_host",         # Example: "localhost" or "127.0.0.1"
    "user": "your_user",         # Example: "root"
    "password": "your_password", # Example: "yourpassword"
    "database": "your_database"  # Example: "test_db"
}

try:
    # Establish connection
    connection = mysql.connector.connect(**config)

    if connection.is_connected():
        print("✅ Successfully connected to MySQL database!")
        db_info = connection.get_server_info()
        print("MySQL Server Version:", db_info)
        
except mysql.connector.Error as err:
    print("❌ Error connecting to MySQL:", err)

finally:
    if 'connection' in locals() and connection.is_connected():
        connection.close()
        print("🔌 MySQL connection closed.")
