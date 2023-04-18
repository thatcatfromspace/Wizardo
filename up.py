import sys
import sqlite3

if len(sys.argv) != 3:
    # print("Usage: python log_credentials.py <username> <password>") OPTIONAL
    sys.exit(1)

username = sys.argv[1]
password = sys.argv[2]

conn = sqlite3.connect('credentials.db')
c = conn.cursor()

c.execute('''CREATE TABLE IF NOT EXISTS credentials
             (username TEXT, password TEXT)''')

c.execute("INSERT INTO credentials (username, password) VALUES (?, ?)",
          (username, password))

conn.commit()
conn.close()

