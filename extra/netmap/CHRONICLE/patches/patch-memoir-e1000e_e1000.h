--- e1000e/e1000.h	2013-02-20 11:04:32.117441000 -0500
+++ net/e1000e/e1000.h	2013-02-20 10:56:59.654717000 -0500
@@ -68,7 +68,8 @@ struct e1000_info;
 #define E1000_MAX_TXD			4096
 #define E1000_MIN_TXD			64
 
-#define E1000_DEFAULT_RXD		256
+//CHRONICLE: #define E1000_DEFAULT_RXD		256
+#define E1000_DEFAULT_RXD		4096
 #define E1000_MAX_RXD			4096
 #define E1000_MIN_RXD			64
 