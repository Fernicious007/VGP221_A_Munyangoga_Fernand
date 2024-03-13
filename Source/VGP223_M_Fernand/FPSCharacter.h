// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "FPSProjectile.h"
#include "FPSCharacter.generated.h" 

UCLASS()
class VGP223_M_FERNAND_API AFPSCharacter : public ACharacter

{
    GENERATED_BODY()

public:
    
    AFPSCharacter();

protected:
   
    virtual void BeginPlay() override;

   
    UPROPERTY(EditDefaultsOnly, Category = Projectile)
        TSubclassOf<class AFPSProjectile> ProjectileClass;

public:
    
    virtual void Tick(float DeltaTime) override;

    
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

   
    UFUNCTION()
        void MoveForward(float Value);

   
    UFUNCTION()
        void MoveRight(float Value);

   
    UFUNCTION()
        void StartJump();

    
    UFUNCTION()
        void StopJump();

    
    UFUNCTION()
        void Fire();

    UPROPERTY(VisibleAnywhere)
        UCameraComponent* FPSCameraComponent;

    UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
        USkeletalMeshComponent* FPSMesh;

  
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
        FVector MuzzleOffset;
};
