// Fill out your copyright notice in the Description page of Project Settings.

#include "KendalCameraManager.h"

#include "DrawDebugHelpers.h"
#include "Engine/Engine.h"
#include "Engine/GameViewportClient.h"

void AKendalCameraManager::DoUpdateCamera(float DeltaTime)
{
	Super::DoUpdateCamera(DeltaTime);

	// Snap the final camera location to the pixel grid
	constexpr float PixelsPerUnits = 0.16f;
	constexpr float UnitsPerPixel = 1.0f / PixelsPerUnits;

	constexpr float MapWidth = 1024.0f / PixelsPerUnits;
	FMinimalViewInfo CameraCacheView = GetCameraCacheView();
	CameraCacheView.Location.X = FMath::GridSnap(CameraCacheView.Location.X, UnitsPerPixel);
	CameraCacheView.Location.Y = FMath::GridSnap(CameraCacheView.Location.Y, UnitsPerPixel);
	CameraCacheView.Location.Z = FMath::GridSnap(CameraCacheView.Location.Z, UnitsPerPixel);

	FVector2D ScreenSize;
	GEngine->GameViewport->GetViewportSize( /*out*/ScreenSize );

	/*FVector CameraTopLeft = CameraCacheView.Location;
	CameraTopLeft.Z = 10.0f;
	CameraTopLeft.X -= ScreenSize.X * 0.5f;
	CameraTopLeft.Y -= ScreenSize.Y * 0.5f;

	DrawDebugSphere(GetWorld(),  CameraTopLeft, 5.0f, 32, FColor::Purple, false, 1.0f);

	FVector CameraBottomRight = CameraCacheView.Location;
	CameraBottomRight.Z = 10.0f;
	CameraBottomRight.X += ScreenSize.X * 0.5f;
	CameraBottomRight.Y += ScreenSize.Y * 0.5f;

	DrawDebugSphere(GetWorld(),  CameraBottomRight, 5.0f, 32, FColor::Orange, false, 1.0f);
*/

	const FVector Left = FVector(ScreenSize.X * 0.5f, MapWidth * 0.5f, 10.0f);
	//DrawDebugSphere(GetWorld(), Left, 5.0f, 32, FColor::Red, false, 1.0f);

	const FVector Right = FVector(MapWidth - ScreenSize.X * 0.5f, MapWidth * 0.5f, 10.0f);
	//DrawDebugSphere(GetWorld(), Right, 5.0f, 32, FColor::Red, false, 1.0f);

	const FVector Top = FVector(MapWidth * 0.5f, ScreenSize.Y * 0.5f, 10.0f);
	//DrawDebugSphere(GetWorld(), Top, 5.0f, 32, FColor::Red, false, 1.0f);

	const FVector Bottom = FVector(MapWidth * 0.5f,MapWidth - ScreenSize.Y * 0.5f, 10.0f);
	//DrawDebugSphere(GetWorld(), Bottom, 5.0f, 32, FColor::Red, false, 1.0f);

	float HorizontalExtent = GetOrthoWidth();
	float VerticalExtent = HorizontalExtent * ScreenSize.X / ScreenSize.Y;

	CameraCacheView.Location.X = FMath::Clamp(CameraCacheView.Location.X, HorizontalExtent - MapWidth / 2.0f, MapWidth / 2.0f - HorizontalExtent);
	CameraCacheView.Location.Y = FMath::Clamp(CameraCacheView.Location.Y, VerticalExtent - MapWidth / 2.0f, MapWidth / 2.0f - VerticalExtent);

	FillCameraCache(CameraCacheView);
}
