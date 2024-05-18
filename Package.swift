// swift-tools-version:5.9

import PackageDescription

let package = Package(
  name: "UnifiedVideoEditorSDK",
  platforms: [
    .iOS(.v15)
  ],
  products: [
    .library(
      name: "UnifiedVideoEditorSDK",
      targets: ["UnifiedVideoEditorSDK"]
    )
  ],
  targets: [
    .binaryTarget(
      name: "UnifiedVideoEditorSDK",
      path: "UnifiedVideoEditorSDK.xcframework"
    )
  ]
)
