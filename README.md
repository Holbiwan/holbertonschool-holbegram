![holbegram](https://zupimages.net/up/24/48/hvjx.png)

## 📝 Description

Holbegram is a mobile app crafted to provide an outstanding experience on both Android and iOS devices. Leveraging the robust Flutter framework alongside Dart programming, Holbegram stands out for its seamless performance and responsiveness, enabling users to fully enjoy the advanced functionalities of a contemporary social media platform.

With a sleek and user-friendly design, Holbegram simplifies connection between individuals, facilitates sharing of engaging visual content, and fosters active participation through dynamic features. This app serves as a vital resource for anyone aiming to enhance their digital presence and engage with an ever-evolving online community.

## 🚀 Installation and Configuration

1. **Installation of Flutter:**

    - Download and install Flutter from the official website: [Flutter Installation](https://flutter.dev/docs/get-started/install).
    - Add Flutter to your PATH.

    ```sh
    $ export PATH="$PATH:`pwd`/flutter/bin"
    ```

1. **Configuration of the development environment:**

    - **`Android Studio:`**
  
      - Download and install [Android Studio](https://developer.android.com/studio).
      - Install the Flutter and Dart plugin in Android Studio.
      - Set up an Android emulator via AVD Manager.
  
    - **`Xcode (for iOS development):`**
  
      - Download and install [Xcode](https://developer.apple.com/xcode/).
      - Open Xcode and install the command line tools: `Xcode > Preferences > Locations > Command Line Tools`.
      - Make sure you have an iOS device or use the built-in iOS simulator.

2. **Creation of a new Flutter project:**

    ```sh
    flutter create holbegram
    cd holbegram
    ```

4. **Add Firebase dependencies:**

    - Use the `pubspec.yaml` file provided and add the necessary dependencies.
    - Then run the following command to install the dependencies:
    
    ```sh
    flutter pub get
    ```

5. **Firebase Configuration:**

    - Create a Firebase project on [Firebase Console](https://console.firebase.google.com/).
    
        - **`Add the Android application:`**
    
            - Save the application using the package name: `com.holbegram.holbegram`.
            - Download the `google-services.json` file and place it in the `android/app` directory.
    
        - **`Add the iOS application:`**
    
            - Save the application using the Bundle ID: `com.holbegram.holbegram`.
            - Download the file `GoogleService-Info.plist` and place it in the `ios/Runner` directory.

## :sagittarius: Author

> :woman: Sabrina Papeau

> :octocat: [Github](https://github.com/Holbiwan)

> [X](https://twitter.com/@Holbiwan_Place)

> :blue_book: [Linkedin](https://www.linkedin.com/in/sabrina-p006566185)
