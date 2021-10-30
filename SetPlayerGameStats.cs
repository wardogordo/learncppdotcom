using System;
using System.IO;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Azure.WebJobs;
using Microsoft.Azure.WebJobs.Extensions.Http;
using Microsoft.AspNetCore.Http;
using Microsoft.Extensions.Logging;
using Newtonsoft.Json;
using PlayFab;
using PlayFab.ServerModels;
using PlayFab.Json;
using System.Collections.Generic;
using PlayFab.DataModels;
using System.Net.Http;
using System.Net.Http.Headers;

// First Version
// https://github.com/PlayFab/PlayFab-Samples/blob/master/Samples/CSharp/AzureFunctions/ExampleFunctions/Handlers.cs

namespace Tradegame.KafeCatch
{
    public static class SetPlayerGameStats
    {
        /// <summary>
        /// This is a simple example of making a PlayFab server API call through an Azure Function
        /// </summary>
        /// <param name="req">The request object deserialized through the Azure Functions runtime from the body of the original request</param>
        /// <param name="log">The log object passed through the Azure Functions runtime for logging to the console</param>
        /// <returns>The result of the simple PlayFab server API call</returns>


        [FunctionName("SetStats")]
        public static async Task<dynamic> SetStats(
            [HttpTrigger(AuthorizationLevel.Function, "post", Route = null)] HttpRequest req, ILogger log)
        {
            /* Create the function execution's context through the request */
            var context = await FunctionContext<dynamic>.Create(req);
            var args = context.FunctionArgument;

            /* Create the request object through the SDK models */
            var request = new UpdatePlayerStatisticsRequest
            {
                PlayFabId = context.CurrentPlayerId,
                Statistics = new List<StatisticUpdate>
                {
                    new StatisticUpdate
                    {
                        StatisticName = "Level",
                        Value = 2
                    }
                }
            };
            /* Use the ApiSettings and AuthenticationContext provided to the function as context for making API calls. */
            var serverApi = new PlayFabServerInstanceAPI(context.ApiSettings, context.AuthenticationContext);
            
            /* The PlayFabServerAPI SDK methods provide means of making HTTP request to the PlayFab Main Server without any 
             * extra code needed to issue the HTTP requests. */
            return await serverApi.UpdatePlayerStatisticsAsync(request);
        
        }
    }
// from: https://github.com/PlayFab/PlayFab-Samples/blob/master/Samples/CSharp/AzureFunctions/CS2AFHelperClasses.cs

      // Models  via ExecuteFunction API
    public class FunctionExecutionContext<T>
    {
        public PlayFab.ProfilesModels.EntityProfileBody CallerEntityProfile { get; set; }
        // public TitleAuthenticationContext TitleAuthenticationContext { get; set; }
        public bool? GeneratePlayStreamEvent { get; set; }
        public T FunctionArgument { get; set; }
    }

    public class FunctionExecutionContext : FunctionExecutionContext<object>
    {
    }

    // Models via Player PlayStream event, entering or leaving a 
    // player segment or as part of a player segment based scheduled task.
    public class PlayerPlayStreamFunctionExecutionContext<T>
    {
        public PlayFab.CloudScriptModels.PlayerProfileModel PlayerProfile { get; set; }
        public bool PlayerProfileTruncated { get; set; }
        public PlayFab.CloudScriptModels.PlayStreamEventEnvelopeModel PlayStreamEventEnvelope { get; set; }
        // public TitleAuthenticationContext TitleAuthenticationContext { get; set; }
        public bool? GeneratePlayStreamEvent { get; set; }
        public T FunctionArgument { get; set; }
    }

    public class PlayerPlayStreamFunctionExecutionContext : PlayerPlayStreamFunctionExecutionContext<object>
    {
    }

    // Models via Scheduled task
    public class PlayStreamEventHistory
    {
        public string ParentTriggerId { get; set; }
        public string ParentEventId { get; set; }
        public bool TriggeredEvents { get; set; }
    }

    public class ScheduledTaskFunctionExecutionContext<T>
    {
        public PlayFab.CloudScriptModels.NameIdentifier ScheduledTaskNameId { get; set; }
        public Stack<PlayStreamEventHistory> EventHistory { get; set; }
        // public TitleAuthenticationContext TitleAuthenticationContext { get; set; }
        public bool? GeneratePlayStreamEvent { get; set; }
        public T FunctionArgument { get; set; }
    }

    public class ScheduledTaskFunctionExecutionContext : ScheduledTaskFunctionExecutionContext<object>
    {
    }

    // Models via entity PlayStream event, entering or leaving an 
    // entity segment or as part of an entity segment based scheduled task.
    public class EventFullName
    {
        public string Name { get; set; }
        public string Namespace { get; set; }
    }

    public class OriginInfo
    {
        public string Id { get; set; }
        public DateTime? Timestamp { get; set; }
    }

    public class EntityPlayStreamEvent<T>
    {
        public string SchemaVersion { get; set; }
        public EventFullName FullName { get; set; }
        public string Id { get; set; }
        public DateTime Timestamp { get; set; }
        public PlayFab.CloudScriptModels.EntityKey Entity { get; set; }
        public PlayFab.CloudScriptModels.EntityKey Originator { get; set; }
        public OriginInfo OriginInfo { get; set; }
        public T Payload { get; set; }
        public PlayFab.ProfilesModels.EntityLineage EntityLineage { get; set; }
    }

    public class EntityPlayStreamEvent : EntityPlayStreamEvent<object>
    {
    }

    public class EntityPlayStreamFunctionExecutionContext<TPayload, TArg>
    {
        public PlayFab.ProfilesModels.EntityProfileBody CallerEntityProfile { get; set; }
        public EntityPlayStreamEvent<TPayload> PlayStreamEvent { get; set; }
        // public TitleAuthenticationContext TitleAuthenticationContext { get; set; }
        public bool? GeneratePlayStreamEvent { get; set; }
        public TArg FunctionArgument { get; set; }
    }

    public class EntityPlayStreamFunctionExecutionContext : EntityPlayStreamFunctionExecutionContext<object, object>
    {
    }
}
