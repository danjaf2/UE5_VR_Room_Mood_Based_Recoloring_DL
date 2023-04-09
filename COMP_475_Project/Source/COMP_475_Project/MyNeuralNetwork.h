// Credit https://github.com/cassiebreviu/unreal-onnxruntime-nni-example/blob/main/MyNeuralNetwork.cpp
// For the NeuralNetwork template for using ONNX runtime, it is modified to use our own model and serve as a cost function

#pragma once

#include "CoreMinimal.h"
#include "NeuralNetwork.h"

#include "PreOpenCVHeaders.h"
#include "OpenCVHelper.h"
#include <ThirdParty/OpenCV/include/opencv2/imgproc.hpp>
#include <ThirdParty/OpenCV/include/opencv2/highgui/highgui.hpp>
#include <ThirdParty/OpenCV/include/opencv2/core.hpp>
#include "PostOpenCVHeaders.h"

#include "MyNeuralNetwork.generated.h"


/**
 * 
 */
UCLASS()
class COMP_475_PROJECT_API UMyNeuralNetwork : public UNeuralNetwork
{
	GENERATED_BODY()

	public:

		UPROPERTY(Transient)
			UNeuralNetwork* Network = nullptr;
		UMyNeuralNetwork();
		TArray<float> URunModel(cv::Mat image);
		TArray<float> UPreProcessImage(cv::Mat image);

		const FString& ONNXModelFilePath = TEXT("C:/Users/Asus/Desktop/bruuh/COMP_475_Project/COMP_475_Project/mood-model-dummy.onnx");
		
	
};
