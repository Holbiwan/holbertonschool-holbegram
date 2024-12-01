#ifndef RUNNER_FLUTTER_WINDOW_H_
#define RUNNER_FLUTTER_WINDOW_H_

#include <flutter/dart_project.h>
#include <flutter/flutter_view_controller.h>

#include <memory>

#include "win32_window.h"

// A specialized window class to host a Flutter view.
class FlutterWindow : public Win32Window {
 public:
  // Constructs a FlutterWindow to host a Flutter view using the given Dart project.
  explicit FlutterWindow(const flutter::DartProject& project);

  // Destructor to clean up resources used by FlutterWindow.
  virtual ~FlutterWindow();

 protected:
  // Called when the window is created. Initializes the Flutter view.
  bool OnCreate() override;

  // Called when the window is destroyed. Handles cleanup tasks.
  void OnDestroy() override;

  // Handles messages sent to the window (e.g., input, resizing).
  LRESULT MessageHandler(HWND window, UINT const message, WPARAM const wparam,
                         LPARAM const lparam) noexcept override;

 private:
  // The Dart project associated with the Flutter application.
  flutter::DartProject project_;

  // Controller for managing the Flutter instance within the window.
  std::unique_ptr<flutter::FlutterViewController> flutter_controller_;
};

#endif  // RUNNER_FLUTTER_WINDOW_H_
