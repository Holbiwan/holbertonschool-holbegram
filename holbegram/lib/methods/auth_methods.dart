import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:holbegram/models/user.dart';
import 'package:holbegram/screens/auth/methods/user_storage.dart';

// Class to manage authentication methods
class AuthMethods {
  // Initialization of FirebaseAuth and FirebaseFirestore instances
  final FirebaseAuth _auth = FirebaseAuth.instance;
  final FirebaseFirestore _firestore = FirebaseFirestore.instance;

  // Method to log in a user
  Future<String> login({
    required String email,
    required String password,
  }) async {
    // Ensure fields are not empty
    if (email.isEmpty || password.isEmpty) {
      return 'Please fill all the fields';
    }

    try {
      // Log in using email and password
      await _auth.signInWithEmailAndPassword(email: email, password: password);
      return 'success';
    } catch (e) {
      // Return the error message if login fails
      return e.toString();
    }
  }

  // Method to sign up
